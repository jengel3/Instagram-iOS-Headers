
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGAlbumColorPaletteSwatchDelegate.h>

@protocol IGAlbumColorPaletteDelegate;
@class NSArray, UICollectionViewFlowLayout, UICollectionView, UIColor, NSString;

@interface IGAlbumColorPaletteView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGAlbumColorPaletteSwatchDelegate> {

	NSArray* _colorPalettes;
	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _collectionView;
	float _swatchRadius;
	id<IGAlbumColorPaletteDelegate> _delegate;
	UIColor* _selectedColor;

}

@property (assign,nonatomic,__weak) id<IGAlbumColorPaletteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;                                      //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * colorPalettes;                               //@synthesize colorPalettes=_colorPalettes - In the implementation block
@property (nonatomic,readonly) CGSize itemSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didLongPressOnColorPaletteSwatch:(id)arg1 ;
-(void)updateCollectionLayoutValues;
-(id)initWithFrame:(CGRect)arg1 colorPalettes:(id)arg2 sectionInsets:(UIEdgeInsets)arg3 ;
-(id)visibleColorPalette;
-(NSArray *)colorPalettes;
-(void)setDelegate:(id<IGAlbumColorPaletteDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id<IGAlbumColorPaletteDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(CGSize)itemSize;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
@end

