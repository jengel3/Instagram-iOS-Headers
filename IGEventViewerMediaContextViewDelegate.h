

@protocol IGEventViewerMediaContextViewDelegate <NSObject>
@required
-(void)mediaContextViewDidTapDismiss:(id)arg1;
-(void)mediaContextViewDidTapMoreInCaption:(id)arg1;
-(void)mediaContextView:(id)arg1 didTapOnURL:(id)arg2;
-(void)mediaContextViewDidTapLike:(id)arg1;
-(void)mediaContextViewDidTapComment:(id)arg1;
-(void)mediaContextViewDidTapSend:(id)arg1;
-(void)mediaContextViewDidTapLikeViewCount:(id)arg1;
-(void)mediaContextViewDidTapCommentCount:(id)arg1;

@end

