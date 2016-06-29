

@protocol IGFeedStatusViewDataSource <NSObject>
@property (nonatomic,readonly) int status; 
@optional
-(char)hasRestrictedFeed;
-(char)shouldHideIndicatorImage;

@required
-(char)loadedOnce;
-(char)failedWithAuthorizationError;
-(id)emptyMessage;
-(unsigned)itemCount;
-(int)status;
-(char)moreAvailable;
-(id)errorMessage;

@end

