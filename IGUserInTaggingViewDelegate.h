

@protocol IGUserInTaggingViewDelegate <NSObject>
@required
-(void)userInTaggingViewDidStartTaggingAtPosition:(CGPoint)arg1;
-(void)userInTaggingViewDidAddTag:(id)arg1;
-(void)userInTaggingViewDidMoveTag:(id)arg1;
-(void)userInTaggingViewDidRemoveTag:(id)arg1;
-(void)userInTaggingViewDidFinishTagging;

@end

