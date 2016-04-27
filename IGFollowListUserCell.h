
#import <Instagram/IGUserCell.h>
#import <Instagram/IGSimilarAccountsControlDelegate.h>
#import <Instagram/IGSimilarAccountsViewDelegate.h>

@protocol IGFollowListUserCellDelegate;
@class IGSimilarAccountsView, IGSimilarAccountsControl, UIView, NSString;

@interface IGFollowListUserCell : IGUserCell <IGSimilarAccountsControlDelegate, IGSimilarAccountsViewDelegate> {

	IGSimilarAccountsView* _similarAccountsView;
	IGSimilarAccountsControl* _similarAccountsControl;
	id<IGFollowListUserCellDelegate> _followListUserCelldelegate;
	/*^block*/id _dismissActionBlock;
	UIView* _bottomLine;

}

@property (nonatomic,retain) IGSimilarAccountsView * similarAccountsView;                                     //@synthesize similarAccountsView=_similarAccountsView - In the implementation block
@property (nonatomic,retain) IGSimilarAccountsControl * similarAccountsControl;                               //@synthesize similarAccountsControl=_similarAccountsControl - In the implementation block
@property (assign,nonatomic,__weak) id<IGFollowListUserCellDelegate> followListUserCelldelegate;              //@synthesize followListUserCelldelegate=_followListUserCelldelegate - In the implementation block
@property (nonatomic,copy) id dismissActionBlock;                                                             //@synthesize dismissActionBlock=_dismissActionBlock - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                                             //@synthesize bottomLine=_bottomLine - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)similarAccountsControl:(id)arg1 didReplenishUserAtIndexPath:(id)arg2 ;
-(void)similarAccountsViewDidTapOnClose:(id)arg1 ;
-(void)similarAccountsViewDidTapOnSeeAllAccounts:(id)arg1 ;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(void)setDismissActionBlock:(id)arg1 ;
-(id)dismissActionBlock;
-(id<IGFollowListUserCellDelegate>)followListUserCelldelegate;
-(void)setSimilarAccountsView:(IGSimilarAccountsView *)arg1 ;
-(void)setSimilarAccountsControl:(IGSimilarAccountsControl *)arg1 ;
-(void)setFollowListUserCelldelegate:(id<IGFollowListUserCellDelegate>)arg1 ;
-(IGSimilarAccountsView *)similarAccountsView;
-(IGSimilarAccountsControl *)similarAccountsControl;
-(void)configureCellWithUser:(id)arg1 showSimilarAccountsView:(char)arg2 showSocialContext:(char)arg3 followActionBlock:(/*^block*/id)arg4 dismissActionBlock:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

