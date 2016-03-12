

@protocol IGFacebookPagesDataSourceDelegate;
@class FBSDKAccessToken;

@interface IGFacebookPagesDataSource : NSObject {

	id<IGFacebookPagesDataSourceDelegate> _delegate;
	FBSDKAccessToken* _accessToken;

}

@property (assign,nonatomic,__weak) id<IGFacebookPagesDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * accessToken;                                     //@synthesize accessToken=_accessToken - In the implementation block
-(void)parseResults:(id)arg1 ;
-(void)fetchPagesWithFields:(id)arg1 ;
-(void)setDelegate:(id<IGFacebookPagesDataSourceDelegate>)arg1 ;
-(id<IGFacebookPagesDataSourceDelegate>)delegate;
-(void)handleError:(id)arg1 ;
-(FBSDKAccessToken *)accessToken;
-(void)setAccessToken:(FBSDKAccessToken *)arg1 ;
@end

