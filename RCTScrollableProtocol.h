

@protocol RCTScrollableProtocol
@property (assign,nonatomic,__weak) NSObject*<UIScrollViewDelegate> nativeScrollDelegate; 
@property (nonatomic,readonly) CGSize contentSize; 
@required
-(void)scrollToOffset:(CGPoint)arg1;
-(void)scrollToOffset:(CGPoint)arg1 animated:(char)arg2;
-(NSObject*<UIScrollViewDelegate>)nativeScrollDelegate;
-(void)setNativeScrollDelegate:(id)arg1;
-(CGSize)contentSize;
-(void)zoomToRect:(CGRect)arg1 animated:(char)arg2;

@end

