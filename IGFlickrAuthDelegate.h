

@protocol IGFlickrAuthDelegate <NSObject>
@optional
-(void)flickrDidStartAuthentication:(id)arg1;
-(void)flickrWebViewLoadInProgress:(char)arg1;

@required
-(void)flickrDidAuthorize:(id)arg1;
-(void)flickrDidNotAuthorize:(id)arg1;

@end

