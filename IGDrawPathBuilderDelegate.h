

@protocol IGDrawPathBuilderDelegate <NSObject>
@required
-(void)drawPathBuilderDidStartStroke:(id)arg1;
-(CGPoint*)drawPathBuilder:(id)arg1 locationOfPoint:(CGPoint)arg2;
-(void)drawPathBuilder:(id)arg1 didAddStrokePath:(id)arg2;
-(void)drawPathBuilderDidFinishStroke:(id)arg1;

@end

