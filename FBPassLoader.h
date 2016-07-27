

@protocol FBPassLoaderDelegate;
@class NSURLConnection, NSMutableData;

@interface FBPassLoader : NSObject {

	id<FBPassLoaderDelegate> _delegate;
	NSURLConnection* _passbookConnection;
	NSMutableData* _passbookConnectionData;

}

@property (nonatomic,retain) NSURLConnection * passbookConnection;                  //@synthesize passbookConnection=_passbookConnection - In the implementation block
@property (nonatomic,copy) NSMutableData * passbookConnectionData;                  //@synthesize passbookConnectionData=_passbookConnectionData - In the implementation block
@property (assign,nonatomic,__weak) id<FBPassLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isLoading; 
-(void)loadWithRequest:(id)arg1 ;
-(void)setPassbookConnection:(NSURLConnection *)arg1 ;
-(NSURLConnection *)passbookConnection;
-(void)setPassbookConnectionData:(NSMutableData *)arg1 ;
-(NSMutableData *)passbookConnectionData;
-(void)cancelLoading;
-(void)setDelegate:(id<FBPassLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBPassLoaderDelegate>)delegate;
-(char)isLoading;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
@end

