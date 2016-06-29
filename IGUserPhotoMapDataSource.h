

@protocol IGPhotoMapDataSourceDelegate;
@class IGUser;

@interface IGUserPhotoMapDataSource : NSObject {

	char _forMapReview;
	IGUser* _user;
	id<IGPhotoMapDataSourceDelegate> _delegate;

}

@property (nonatomic,readonly) IGUser * user;                                               //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<IGPhotoMapDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUser:(id)arg1 forMapReview:(char)arg2 ;
-(IGUser *)user;
-(void)setDelegate:(id<IGPhotoMapDataSourceDelegate>)arg1 ;
-(id<IGPhotoMapDataSourceDelegate>)delegate;
-(void)startRequest;
@end

