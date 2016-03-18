
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIColor, PHImageManager, PHImageRequestOptions, UIImageView, UIView, IGGradientView, UILabel, NSNumber, NSString;

@interface IGGridViewCell : UICollectionViewCell {

	char _disabled;
	char _showSelectedOverlay;
	char _showAssetNumber;
	char _inICloud;
	id _asset;
	UIColor* _defaultBackgroundColor;
	PHImageManager* _imageManager;
	PHImageRequestOptions* _imageRequestOptions;
	unsigned _assetNumber;
	UIImageView* _imageView;
	UIView* _selectedOverlay;
	UIView* _disabledOverlay;
	int _requestID;
	UIImageView* _inICloudView;
	UIImageView* _slomoView;
	IGGradientView* _gradientView;
	UILabel* _durationLabel;
	UILabel* _assetNumberLabel;
	UILabel* _overlayTextLabel;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) id asset;                                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) char isAssetPhoto; 
@property (nonatomic,readonly) NSNumber * duration; 
@property (assign,getter=isDisabled,nonatomic) char disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                         //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) NSString * overlayText; 
@property (nonatomic,retain) PHImageManager * imageManager;                            //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;              //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                     //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic) char showSelectedOverlay;                                 //@synthesize showSelectedOverlay=_showSelectedOverlay - In the implementation block
@property (assign,nonatomic) char showAssetNumber;                                     //@synthesize showAssetNumber=_showAssetNumber - In the implementation block
@property (assign,nonatomic) unsigned assetNumber;                                     //@synthesize assetNumber=_assetNumber - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * selectedOverlay;                                 //@synthesize selectedOverlay=_selectedOverlay - In the implementation block
@property (nonatomic,retain) UIView * disabledOverlay;                                 //@synthesize disabledOverlay=_disabledOverlay - In the implementation block
@property (assign,nonatomic) int requestID;                                            //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) char inICloud;                                            //@synthesize inICloud=_inICloud - In the implementation block
@property (nonatomic,retain) UIImageView * inICloudView;                               //@synthesize inICloudView=_inICloudView - In the implementation block
@property (nonatomic,retain) UIImageView * slomoView;                                  //@synthesize slomoView=_slomoView - In the implementation block
@property (nonatomic,retain) IGGradientView * gradientView;                            //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                                  //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) UILabel * assetNumberLabel;                               //@synthesize assetNumberLabel=_assetNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * overlayTextLabel;                               //@synthesize overlayTextLabel=_overlayTextLabel - In the implementation block
@property (getter=isHighFrameRate,nonatomic,readonly) char highFrameRate; 
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)cancelImageRequest;
-(void)setSelectedOverlay:(UIView *)arg1 ;
-(UIView *)selectedOverlay;
-(void)setOverlayTextLabel:(UILabel *)arg1 ;
-(UILabel *)overlayTextLabel;
-(void)setDisabledOverlay:(UIView *)arg1 ;
-(UIView *)disabledOverlay;
-(void)setInICloudView:(UIImageView *)arg1 ;
-(UIImageView *)inICloudView;
-(void)setSlomoView:(UIImageView *)arg1 ;
-(UIImageView *)slomoView;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(UILabel *)durationLabel;
-(void)setShowSelectedOverlay:(char)arg1 ;
-(void)setShowAssetNumber:(char)arg1 ;
-(void)setInICloud:(char)arg1 ;
-(char)usePhotosFramework;
-(PHImageRequestOptions *)imageRequestOptions;
-(void)updateLabelVisibility;
-(NSString *)overlayText;
-(char)inICloud;
-(char)isAssetPhotoOrVideo;
-(char)isAssetPhoto;
-(char)isHighFrameRate;
-(char)showSelectedOverlay;
-(void)setAssetNumber:(unsigned)arg1 ;
-(void)setOverlayText:(NSString *)arg1 ;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(char)showAssetNumber;
-(unsigned)assetNumber;
-(UILabel *)assetNumberLabel;
-(void)setAssetNumberLabel:(UILabel *)arg1 ;
-(id)dateFormatter;
-(int)requestID;
-(id)creationDate;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(NSNumber *)duration;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(UIImageView *)imageView;
-(void)setDisabled:(char)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)asset;
-(void)setAsset:(id)arg1 ;
-(CGSize)thumbnailSize;
-(void)setImageManager:(PHImageManager *)arg1 ;
-(PHImageManager *)imageManager;
-(void)setGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)gradientView;
-(void)setRequestID:(int)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(char)isDisabled;
@end

