

@protocol IGUFIButtonBarViewDelegate <NSObject>
@required
-(void)UFIButtonBarDidTapOnLike:(id)arg1;
-(void)UFIButtonBarDidTapOnComment:(id)arg1;
-(void)UFIButtonBarDidTapOnSend:(id)arg1;
-(void)UFIButtonBarDidTapOnLikeViewCount:(id)arg1;
-(void)UFIButtonBarDidTapOnCommentCount:(id)arg1;
-(void)UFIButtonBar:(id)arg1 wantsSizeUpdateAnimated:(char)arg2;

@end

