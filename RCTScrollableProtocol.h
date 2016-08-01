

@protocol RCTScrollableProtocol
@property (nonatomic,readonly) CGSize contentSize; 
@required
-(void)scrollToOffset:(CGPoint)arg1;
-(void)scrollToOffset:(CGPoint)arg1 animated:(char)arg2;
-(void)addScrollListener:(id)arg1;
-(void)removeScrollListener:(id)arg1;
-(CGSize)contentSize;
-(void)zoomToRect:(CGRect)arg1 animated:(char)arg2;

@end

