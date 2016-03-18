
#import <Instagram/IGUserListViewController.h>

@interface IGVideoViewCountUserListViewController : IGUserListViewController {

	char _showExpandedLikersList;
	char _showLikesBelowLikersList;

}

@property (assign,nonatomic) char showExpandedLikersList;                //@synthesize showExpandedLikersList=_showExpandedLikersList - In the implementation block
@property (assign,nonatomic) char showLikesBelowLikersList;              //@synthesize showLikesBelowLikersList=_showLikesBelowLikersList - In the implementation block
-(id)likeText;
-(id)initWithFeedItemPK:(id)arg1 ;
-(void)updateWithFeedItemPK:(id)arg1 ;
-(char)shouldShowViewCountSection;
-(char)shouldShowLikersHeaderSection;
-(int)numberOfRowsInUsersSection;
-(char)shouldShowLikeCountSection;
-(id)viewCountCell;
-(id)likersHeaderCell;
-(id)likesCountCell;
-(char)showExpandedLikersList;
-(void)setShowExpandedLikersList:(char)arg1 ;
-(char)showLikesBelowLikersList;
-(void)setShowLikesBelowLikersList:(char)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

