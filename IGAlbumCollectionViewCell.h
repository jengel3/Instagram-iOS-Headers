
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGAlbumPlayerView, IGProfilePictureImageView, UILabel, NSString;

@interface IGAlbumCollectionViewCell : UICollectionViewCell {

	IGAlbumPlayerView* _playerView;
	IGProfilePictureImageView* _profileImageView;
	UILabel* _dateLabel;
	UILabel* _titleLabel;
	UILabel* _contributorsLabel;

}

@property (nonatomic,retain) IGAlbumPlayerView * playerView;                              //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                         //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * contributorsLabel;                                 //@synthesize contributorsLabel=_contributorsLabel - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,copy) NSString * dateString; 
@property (nonatomic,copy) NSString * contributorsString; 
-(void)setPlayerView:(IGAlbumPlayerView *)arg1 ;
-(NSString *)contributorsString;
-(UILabel *)contributorsLabel;
-(void)setContributorsLabel:(UILabel *)arg1 ;
-(void)setContributorsString:(NSString *)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(IGAlbumPlayerView *)playerView;
-(void)setDateLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)dateLabel;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
@end

