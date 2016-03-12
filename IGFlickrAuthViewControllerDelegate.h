

@protocol IGFlickrAuthViewControllerDelegate <NSObject>
@required
-(void)flickrAuthController:(id)arg1 didLoginWithTokenKey:(id)arg2 tokenSecret:(id)arg3 username:(id)arg4;
-(void)flickrAuthControllerLoginFailed:(id)arg1;

@end

