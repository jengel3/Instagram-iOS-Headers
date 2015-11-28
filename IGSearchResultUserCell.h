
#import <Instagram/IGSearchResultCell.h>

@class UIImageView, IGProfilePictureImageView;

@interface IGSearchResultUserCell : IGSearchResultCell {

	UIImageView* _verifiedUserBadgeView;

}

@property (nonatomic,retain) UIImageView * verifiedUserBadgeView;               //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * iconView; 
-(char)shouldShowFollowButtonForUser:(id)arg1 ;
-(UIImageView *)verifiedUserBadgeView;
-(void)setVerifiedUserBadgeView:(UIImageView *)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)layoutSubviews;
@end

