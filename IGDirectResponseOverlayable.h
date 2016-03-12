

@protocol IGDirectResponseOverlayable
@property (assign,nonatomic,__weak) id<IGDirectResponseOverlayViewDelegate> delegate; 
@required
-(void)dismissOverlayAnimated:(char)arg1;
-(id)initWithImageURL:(id)arg1 directResponseInfo:(id)arg2 frame:(CGRect)arg3;
-(void)showOverlayAnimated:(char)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGDirectResponseOverlayViewDelegate>)delegate;

@end

