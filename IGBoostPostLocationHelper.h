

@protocol IGBoostPostLocationHelperDelegate;
@interface IGBoostPostLocationHelper : NSObject {

	char _isLocating;
	id<IGBoostPostLocationHelperDelegate> _delegate;

}

@property (assign,nonatomic) char isLocating;                                                    //@synthesize isLocating=_isLocating - In the implementation block
@property (assign,nonatomic,__weak) id<IGBoostPostLocationHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)onLocationUpdated:(id)arg1 ;
-(void)onLocationAuthorzied;
-(void)setIsLocating:(char)arg1 ;
-(void)handleAuthorizationDenied;
-(char)isLocating;
-(void)requestLocation;
-(void)setDelegate:(id<IGBoostPostLocationHelperDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGBoostPostLocationHelperDelegate>)delegate;
@end

