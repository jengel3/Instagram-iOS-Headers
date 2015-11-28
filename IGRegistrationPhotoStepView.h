
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGRegistrationPhotoStepView : UIView {

	UIButton* _importFromFBButton;
	UIButton* _takePhotoButton;
	UIButton* _chooseFromLibraryButton;
	UIButton* _importFromTwitterButton;

}

@property (nonatomic,retain) UIButton * importFromFBButton;                   //@synthesize importFromFBButton=_importFromFBButton - In the implementation block
@property (nonatomic,retain) UIButton * takePhotoButton;                      //@synthesize takePhotoButton=_takePhotoButton - In the implementation block
@property (nonatomic,retain) UIButton * chooseFromLibraryButton;              //@synthesize chooseFromLibraryButton=_chooseFromLibraryButton - In the implementation block
@property (nonatomic,retain) UIButton * importFromTwitterButton;              //@synthesize importFromTwitterButton=_importFromTwitterButton - In the implementation block
-(UIButton *)importFromFBButton;
-(UIButton *)takePhotoButton;
-(UIButton *)chooseFromLibraryButton;
-(UIButton *)importFromTwitterButton;
-(void)setSeparatorLines;
-(void)setImportFromFBButton:(UIButton *)arg1 ;
-(void)setTakePhotoButton:(UIButton *)arg1 ;
-(void)setChooseFromLibraryButton:(UIButton *)arg1 ;
-(void)setImportFromTwitterButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

