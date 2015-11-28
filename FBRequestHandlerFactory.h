

@interface FBRequestHandlerFactory : NSObject
+(/*^block*/id)handlerThatRetries:(/*^block*/id)arg1 forRequest:(id)arg2 ;
+(/*^block*/id)handlerThatAlertsUser:(/*^block*/id)arg1 forRequest:(id)arg2 ;
+(/*^block*/id)handlerThatReconnects:(/*^block*/id)arg1 forRequest:(id)arg2 ;
@end

