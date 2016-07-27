
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBSDKProfilePictureViewState, NSString;

@interface FBSDKProfilePictureView : UIView {

	char _hasProfileImage;
	UIImageView* _imageView;
	FBSDKProfilePictureViewState* _lastState;
	char _needsImageUpdate;
	char _placeholderImageIsValid;
	unsigned _pictureMode;
	NSString* _profileID;

}

@property (assign,nonatomic) unsigned pictureMode;              //@synthesize pictureMode=_pictureMode - In the implementation block
@property (nonatomic,copy) NSString * profileID;                //@synthesize profileID=_profileID - In the implementation block
+(id)_imageURLWithState:(id)arg1 ;
+(void)_downloadImageWithState:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_accessTokenDidChangeNotification:(id)arg1 ;
-(unsigned)pictureMode;
-(char)_imageShouldFit;
-(void)_configureProfilePictureView;
-(void)setNeedsImageUpdate;
-(void)_setPlaceholderImage;
-(void)_needsImageUpdate;
-(CGSize)_imageSize:(char)arg1 scale:(float)arg2 ;
-(void)_updateImageWithData:(id)arg1 state:(id)arg2 ;
-(void)setProfileID:(NSString *)arg1 ;
-(void)setPictureMode:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentMode:(int)arg1 ;
-(int)contentMode;
-(void)setMode:(unsigned)arg1 ;
-(NSString *)profileID;
@end

