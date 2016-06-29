
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGFollowAllUsersCellDelegate;
@class IGFollowAllUsersView;

@interface IGFollowAllUsersCell : UICollectionViewCell {

	id<IGFollowAllUsersCellDelegate> _delegate;
	IGFollowAllUsersView* _followAllUsersView;

}

@property (nonatomic,readonly) IGFollowAllUsersView * followAllUsersView;                   //@synthesize followAllUsersView=_followAllUsersView - In the implementation block
@property (assign,nonatomic) unsigned userCount; 
@property (assign,nonatomic) char followAllButtonEnabled; 
@property (assign,nonatomic,__weak) id<IGFollowAllUsersCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)preferredHeight;
+(Class)viewClass;
-(void)setUserCount:(unsigned)arg1 ;
-(char)followAllButtonEnabled;
-(void)setFollowAllButtonEnabled:(char)arg1 ;
-(void)onFollowAllButtonTapped;
-(IGFollowAllUsersView *)followAllUsersView;
-(unsigned)userCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFollowAllUsersCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFollowAllUsersCellDelegate>)delegate;
@end

