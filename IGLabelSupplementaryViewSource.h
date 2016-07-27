
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListSupplementaryViewSource.h>

@protocol IGListItemType, IGListCollectionContext;
@class NSString, IGLabelItemConfiguration, IGListItemController;

@interface IGLabelSupplementaryViewSource : NSObject <IGListSupplementaryViewSource> {

	NSString* _labelTitle;
	IGLabelItemConfiguration* _config;
	IGListItemController*<IGListItemType> _listItemController;
	id<IGListCollectionContext> _collectionContext;

}

@property (nonatomic,__weak,readonly) IGListItemController*<IGListItemType> listItemController;              //@synthesize listItemController=_listItemController - In the implementation block
@property (nonatomic,__weak,readonly) id<IGListCollectionContext> collectionContext;                         //@synthesize collectionContext=_collectionContext - In the implementation block
@property (nonatomic,retain) NSString * labelTitle;                                                          //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,retain) IGLabelItemConfiguration * config;                                              //@synthesize config=_config - In the implementation block
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
-(void)setLabelTitle:(NSString *)arg1 ;
-(float)heightForLabelItemCellWithConstraintWidth:(float)arg1 ;
-(NSString *)labelTitle;
-(IGListItemController*<IGListItemType>)listItemController;
-(IGLabelItemConfiguration *)config;
-(void)setConfig:(IGLabelItemConfiguration *)arg1 ;
@end

