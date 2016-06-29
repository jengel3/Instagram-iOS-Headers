
#import <Instagram/IGTableViewCell.h>

@class IGFacebookPageInfo, IGImageView;

@interface IGBusinessConversionPageCell : IGTableViewCell {

	IGFacebookPageInfo* _pageInfo;
	IGImageView* _profilePicture;

}

@property (nonatomic,retain) IGImageView * profilePicture;               //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
-(IGImageView *)profilePicture;
-(void)setProfilePicture:(IGImageView *)arg1 ;
-(IGFacebookPageInfo *)pageInfo;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

