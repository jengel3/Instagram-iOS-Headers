

@protocol SKPaymentTransactionObserver <NSObject>
@optional
-(void)paymentQueue:(id)arg1 updatedDownloads:(id)arg2;
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
-(void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;

@required
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;

@end

