
#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIImageView, IGImageView;

@interface IGBusinessConversionPageCell : UITableViewCell {

	char _shouldShowCheckmark;
	NSDictionary* _pageInfo;
	UIImageView* _checkmark;
	IGImageView* _profilePicture;

}

@property (nonatomic,retain) NSDictionary * pageInfo;                   //@synthesize pageInfo=_pageInfo - In the implementation block
@property (assign,nonatomic) char shouldShowCheckmark;                  //@synthesize shouldShowCheckmark=_shouldShowCheckmark - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;                   //@synthesize checkmark=_checkmark - In the implementation block
@property (nonatomic,retain) IGImageView * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
-(IGImageView *)profilePicture;
-(void)setProfilePicture:(IGImageView *)arg1 ;
-(NSDictionary *)pageInfo;
-(void)setPageInfo:(NSDictionary *)arg1 ;
-(char)shouldShowCheckmark;
-(void)setShouldShowCheckmark:(char)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
@end

