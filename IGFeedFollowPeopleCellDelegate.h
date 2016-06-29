

@protocol IGFeedFollowPeopleCellDelegate <NSObject>
@required
-(void)feedFollowPeopleCellDidDismissUnit:(id)arg1;
-(void)feedFollowPeopleCellDidChangeHeight:(id)arg1;
-(void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2;
-(void)feedFollowPeopleCellDidTapBanner:(id)arg1;
-(void)feedFollowPeopleCellDidTapFooterBanner:(id)arg1;

@end

