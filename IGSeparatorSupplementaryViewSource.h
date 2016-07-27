
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListSupplementaryViewSource.h>

@protocol IGListItemType, IGListCollectionContext;
@class UIColor, IGListItemController, NSString;

@interface IGSeparatorSupplementaryViewSource : NSObject <IGListSupplementaryViewSource> {

	float _leftInset;
	UIColor* _separatorColor;
	IGListItemController*<IGListItemType> _listItemController;
	id<IGListCollectionContext> _collectionContext;

}

@property (nonatomic,__weak,readonly) IGListItemController*<IGListItemType> listItemController;              //@synthesize listItemController=_listItemController - In the implementation block
@property (nonatomic,__weak,readonly) id<IGListCollectionContext> collectionContext;                         //@synthesize collectionContext=_collectionContext - In the implementation block
@property (assign,nonatomic) float leftInset;                                                                //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                                       //@synthesize separatorColor=_separatorColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGListCollectionContext>)collectionContext;
-(id)initWithListItemController:(id)arg1 collectionContext:(id)arg2 ;
-(id)supplementaryViewKindClasses;
-(id)supportedElementKinds;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2 ;
-(IGListItemController*<IGListItemType>)listItemController;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(float)leftInset;
-(void)setLeftInset:(float)arg1 ;
@end

