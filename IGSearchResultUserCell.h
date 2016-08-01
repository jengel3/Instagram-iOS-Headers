
#import <Instagram/IGSearchResultCell.h>

@class UIImageView, IGProfilePictureImageView;

@interface IGSearchResultUserCell : IGSearchResultCell {

	UIImageView* _verifiedUserBadgeView;

}

@property (nonatomic,retain) UIImageView * verifiedUserBadgeView;               //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * iconView; 
-(void)setUpDetailTextLabelForUser:(id)arg1 ;
-(UIImageView *)verifiedUserBadgeView;
-(void)setVerifiedUserBadgeView:(UIImageView *)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

