
#import <Instagram/IGUserCell.h>
#import <Instagram/IGSimilarAccountsControlDelegate.h>
#import <Instagram/IGSimilarAccountsViewDelegate.h>

@protocol IGFollowListUserCellDelegate;
@class UIView, NSString;

@interface IGFollowListUserCell : IGUserCell <IGSimilarAccountsControlDelegate, IGSimilarAccountsViewDelegate> {

	id<IGFollowListUserCellDelegate> _followListUserCelldelegate;
	/*^block*/id _dismissActionBlock;
	UIView* _bottomLine;

}

@property (nonatomic,copy) id dismissActionBlock;                                                             //@synthesize dismissActionBlock=_dismissActionBlock - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                                             //@synthesize bottomLine=_bottomLine - In the implementation block
@property (assign,nonatomic,__weak) id<IGFollowListUserCellDelegate> followListUserCelldelegate;              //@synthesize followListUserCelldelegate=_followListUserCelldelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(void)setDismissActionBlock:(id)arg1 ;
-(void)configureCellWithUser:(id)arg1 followActionBlock:(/*^block*/id)arg2 dismissActionBlock:(/*^block*/id)arg3 ;
-(id<IGFollowListUserCellDelegate>)followListUserCelldelegate;
-(void)setFollowListUserCelldelegate:(id<IGFollowListUserCellDelegate>)arg1 ;
-(id)dismissActionBlock;
-(void)dealloc;
-(void)layoutSubviews;
@end

