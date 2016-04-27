
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGFeedFollowPeopleCellDelegate.h>

@class IGFeedFollowPeopleCell, NSArray, NSString;

@interface IGRecapFeedViewController : IGFeedViewController_DEPRECATED <IGFeedFollowPeopleCellDelegate> {

	IGFeedFollowPeopleCell* _feedFollowPeopleCell;
	NSArray* _followAccountList;

}

@property (nonatomic,retain) IGFeedFollowPeopleCell * feedFollowPeopleCell;              //@synthesize feedFollowPeopleCell=_feedFollowPeopleCell - In the implementation block
@property (nonatomic,retain) NSArray * followAccountList;                                //@synthesize followAccountList=_followAccountList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)followAccountList;
-(void)feedFollowPeopleCellDidDismissUnit:(id)arg1 ;
-(void)feedFollowPeopleCellDidChangeHeight:(id)arg1 ;
-(void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2 ;
-(void)feedFollowPeopleCellDidTapBanner:(id)arg1 ;
-(void)feedFollowPeopleCellDidTapFooterBanner:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)loadFollowAccountListFromResponse:(id)arg1 ;
-(IGFeedFollowPeopleCell *)feedFollowPeopleCell;
-(void)setFollowAccountList:(NSArray *)arg1 ;
-(void)setFeedFollowPeopleCell:(IGFeedFollowPeopleCell *)arg1 ;
@end

