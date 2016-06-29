

@protocol IGUsertagViewDelegate <NSObject>
@optional
-(void)tagViewWillMove:(id)arg1;
-(void)tagViewDidMove:(id)arg1;
-(void)tagViewDidEndMove:(id)arg1;
-(char)tagViewCanBeSelected:(id)arg1;
-(void)tagViewWasSelected:(id)arg1;
-(void)tagViewWasRemoved:(id)arg1;

@end

