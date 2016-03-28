
#import <UIKit/UITableViewCell.h>

@class IGFacebookPageInfo, UIImageView, IGImageView;

@interface IGBusinessConversionPageCell : UITableViewCell {

	char _shouldShowCheckmark;
	IGFacebookPageInfo* _pageInfo;
	UIImageView* _checkmark;
	IGImageView* _profilePicture;

}

@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
@property (assign,nonatomic) char shouldShowCheckmark;                   //@synthesize shouldShowCheckmark=_shouldShowCheckmark - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;                    //@synthesize checkmark=_checkmark - In the implementation block
@property (nonatomic,retain) IGImageView * profilePicture;               //@synthesize profilePicture=_profilePicture - In the implementation block
-(IGImageView *)profilePicture;
-(void)setProfilePicture:(IGImageView *)arg1 ;
-(IGFacebookPageInfo *)pageInfo;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(char)shouldShowCheckmark;
-(void)setShouldShowCheckmark:(char)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
@end

