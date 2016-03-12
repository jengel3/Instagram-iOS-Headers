

@class OAMutableURLRequest, NSURLResponse, NSURLConnection, NSMutableData;

@interface OADataFetcher : NSObject {

	OAMutableURLRequest* request;
	NSURLResponse* response;
	NSURLConnection* connection;
	NSMutableData* responseData;
	id delegate;
	SEL didFinishSelector;
	SEL didFailSelector;

}
-(void)fetchDataWithRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 didFailSelector:(SEL)arg4 ;
-(void)fetchDataWithRequest:(id)arg1 didFinishBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
@end

