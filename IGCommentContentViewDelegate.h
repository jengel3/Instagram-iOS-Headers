

@protocol IGCommentContentViewDelegate <NSObject>
@required
-(void)contentView:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3;
-(void)contentView:(id)arg1 didTapUser:(id)arg2;
-(void)contentView:(id)arg1 didLongTapUser:(id)arg2;
-(void)contentViewDidTapRetry:(id)arg1;

@end

