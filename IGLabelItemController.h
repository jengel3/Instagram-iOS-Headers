
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class IGLabelItemConfiguration, NSString;

@interface IGLabelItemController : IGListItemController <IGListItemType> {

	IGLabelItemConfiguration* _config;
	NSString* _labelTitle;

}

@property (nonatomic,readonly) IGLabelItemConfiguration * config;              //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSString * labelTitle;                          //@synthesize labelTitle=_labelTitle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)initWithLabelItemConfiguration:(id)arg1 ;
-(float)heightForLabelItemCellWithConstraintWidth:(float)arg1 ;
-(NSString *)labelTitle;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGLabelItemConfiguration *)config;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

