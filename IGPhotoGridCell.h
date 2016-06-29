
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSimpleTableViewCell.h>
#import <Instagram/IGImageViewDelegate.h>

@class NSMutableArray, NSString;

@interface IGPhotoGridCell : IGSimpleTableViewCell <IGImageViewDelegate> {

	char _showsCheckmarks;
	int _layout;
	int _topPadding;
	int _photosCount;
	NSMutableArray* _imageViews;
	NSMutableArray* _imageButtons;
	NSMutableArray* _checkmarks;

}

@property (nonatomic,readonly) NSMutableArray * imageViews;                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,readonly) NSMutableArray * imageButtons;              //@synthesize imageButtons=_imageButtons - In the implementation block
@property (nonatomic,readonly) NSMutableArray * checkmarks;                //@synthesize checkmarks=_checkmarks - In the implementation block
@property (assign,nonatomic) int photosCount;                              //@synthesize photosCount=_photosCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)photosPerRowForLayout:(int)arg1 ;
+(float)photoMarginForLayout:(int)arg1 ;
+(float)photoSizeForLayout:(int)arg1 ;
+(float)photoPaddingForLayout:(int)arg1 ;
+(float)photoInsetForLayout:(int)arg1 ;
+(CGSize)sizeForLayout:(int)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 layout:(int)arg2 checkmarks:(char)arg3 topPadding:(int)arg4 photosCount:(int)arg5 ;
-(void)arrangeViewFor3UpExplore;
-(void)arrangeViews;
-(NSMutableArray *)imageButtons;
-(NSMutableArray *)checkmarks;
-(id)initWithReuseIdentifier:(id)arg1 layout:(int)arg2 checkmarks:(char)arg3 ;
-(void)setImageTarget:(id)arg1 action:(SEL)arg2 ;
-(void)hideImage:(char)arg1 atIndex:(int)arg2 ;
-(int)photosCount;
-(void)prepareForReuse;
-(void)setPhotosCount:(int)arg1 ;
-(NSMutableArray *)imageViews;
@end

