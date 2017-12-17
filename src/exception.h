#ifndef __EXCEPTION__H__
#define __EXCEPTION__H__

class Exception {};

class ExceptionDataset :    public Exception {};
class ExceptionGenerator :  public Exception {};

class ExceptionDatasetUninitialized :   public ExceptionDataset {};
class ExceptionOutOfRange :             public ExceptionDataset {};

class ExceptionGeneratorEmpty : public ExceptionGenerator {};

class ExceptionTruthTable : public Exception {};

class ExceptionInvalidVectorAssignment : public ExceptionTruthTable {};
class ExceptionTruthTableInvalidSize : public ExceptionTruthTable {};

static void throwFalse(bool i) {if(!i) throw i;}

#endif