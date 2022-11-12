#ifndef REG_ERANGE
#define REG_ERANGE 11
#endif

#ifndef ERR_MALLOC
#define ERR_MALLOC (-300)
#endif

#ifndef ERR_BAD_TYPE
#define ERR_BAD_TYPE (-400)
#endif

#ifndef ERR_TOO_FEW_ELEMENTS
#define ERR_TOO_FEW_ELEMENTS (-600)
#endif

void _alloc_double(double **var, long max)
{
    *var = (double *) emalloc((max + 1) * sizeof(double));
}

void _alloc_int(int **var, long max)
{
    *var = (int *) emalloc((max + 1) * sizeof(int));
}

void _alloc_long(long **var, long max)
{
    *var = (long *) emalloc((max + 1) * sizeof(long));
}

static inline int _is_numeric_string(char *str, int length, long *lval, double *dval)
{
    long local_lval;
    double local_dval;
    char *end_ptr;

    while (str[length - 1] == ' ' && length > 0) length--;
    if (!length) {
        return 0;
    }

    errno=0;
    local_lval = strtol(str, &end_ptr, 10);
    if (errno!=REG_ERANGE && end_ptr == str+length) { /* integer string */
        if (lval) {
            *lval = local_lval;
        }
        return IS_LONG;
    }

    errno=0;
    local_dval = strtod(str, &end_ptr);
    if (errno!=REG_ERANGE && end_ptr == str+length) { /* floating point string */
        if (dval) {
            *dval = local_dval;
        }
        return IS_DOUBLE;
    }

    return 0;
}


int _convert_to_double(zval *p, double *d)
{
    long local_lval;
    double local_dval;

    if (Z_TYPE_P(p) == IS_STRING)
    {
        *d = 0;
        if (p->value.str->len == 0) return 0;
        switch (_is_numeric_string(p->value.str->val, p->value.str->len, &local_lval, &local_dval))
        {
            case IS_LONG:   *d = (double)local_lval; break;
            case IS_DOUBLE: *d = local_dval; break;
            default: return ERR_BAD_TYPE;
        }
        return 0;
    }

    switch (Z_TYPE_P(p))
    {
        case IS_DOUBLE: *d = p->value.dval; break;
        case IS_LONG:   *d = (double)p->value.lval; break;
        default:   return ERR_BAD_TYPE;
    }
    return 0;
}


int _convert_to_double_array(zval *p, double *d, long n) {
    int i, errcode;
    zval *val;
    HashTable *ht;
    HashPosition pos;
    if (n > zend_array_count(Z_ARR_P(p))) return ERR_TOO_FEW_ELEMENTS;
    ht = HASH_OF(p);
    zend_hash_internal_pointer_reset_ex(ht, &pos);
    for (i = 0; i < n; i++) {
        val = zend_hash_get_current_data_ex(ht, &pos);
        errcode = _convert_to_double(val, &d[i]);
        if (errcode) return errcode;
        zend_hash_move_forward_ex(ht, &pos);
    }
    return 0;
}

int _convert_to_int(zval *p, int *i)
{
    long local_lval = (long)i;
    int error = _convert_to_long(p, &local_lval);
    *i = (int)local_lval;
    return error;
}


int _convert_to_long(zval *p, long *l)
{
    long local_lval;
    double local_dval;

    if (Z_TYPE_P(p) == IS_STRING)
    {
        *l = 0;
        if (p->value.str->len == 0) return 0;
        switch (_is_numeric_string(p->value.str->val, p->value.str->len, &local_lval, &local_dval))
        {
            case IS_DOUBLE: *l = (long)local_dval; break;
            case IS_LONG:   *l = local_lval; break;
            default: return ERR_BAD_TYPE;
        }
        return 0;
    }

    switch (Z_TYPE_P(p))
    {
        case IS_DOUBLE: *l = (long)p->value.dval; break;
        case IS_LONG:   *l = p->value.lval; break;
        default:   return ERR_BAD_TYPE;
    }
    return 0;
}