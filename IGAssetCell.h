
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGLibraryAsset, UIImageView, IGGradientView, UILabel, NSDateFormatter;

@interface IGAssetCell : UICollectionViewCell {

	char _chosen;
	IGLibraryAsset* _asset;
	UIImageView* _imageView;
	UIImageView* _overlayView;
	UIImageView* _slomoView;
	IGGradientView* _gradientView;
	UILabel* _durationLabel;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) IGLibraryAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) char chosen;                                  //@synthesize chosen=_chosen - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * overlayView;                    //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImageView * slomoView;                      //@synthesize slomoView=_slomoView - In the implementation block
@property (nonatomic,retain) IGGradientView * gradientView;                //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                      //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(void)setSlomoView:(UIImageView *)arg1 ;
-(UIImageView *)slomoView;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(UILabel *)durationLabel;
-(void)updateControlState;
-(char)chosen;
-(void)setChosen:(char)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(IGLibraryAsset *)asset;
-(void)setAsset:(IGLibraryAsset *)arg1 ;
-(void)setGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)gradientView;
-(void)setOverlayView:(UIImageView *)arg1 ;
-(UIImageView *)overlayView;
@end

