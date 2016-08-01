
#import <Instagram/IGUserCell.h>
#import <Instagram/IGSimilarAccountsViewDelegate.h>

@protocol IGFollowListUserCellDelegate;
@class UIView, UIImageView, NSString;

@interface IGFollowListUserCell : IGUserCell <IGSimilarAccountsViewDelegate> {

	id<IGFollowListUserCellDelegate> _followListUserCelldelegate;
	/*^block*/id _dismissActionBlock;
	UIView* _bottomLine;
	UIImageView* _verifiedUserBadgeView;

}

@property (nonatomic,copy) id dismissActionBlock;                                                             //@synthesize dismissActionBlock=_dismissActionBlock - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                                             //@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,readonly) UIImageView * verifiedUserBadgeView;                                           //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFollowListUserCellDelegate> followListUserCelldelegate;              //@synthesize followListUserCelldelegate=_followListUserCelldelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(UIImageView *)verifiedUserBadgeView;
-(void)setDismissActionBlock:(id)arg1 ;
-(id<IGFollowListUserCellDelegate>)followListUserCelldelegate;
-(id)dismissActionBlock;
-(void)setFollowListUserCelldelegate:(id<IGFollowListUserCellDelegate>)arg1 ;
-(void)configureCellWithUser:(id)arg1 followActionBlock:(/*^block*/id)arg2 dismissActionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

