
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class IGCommentReshareRecord, NSString;

@interface IGCommentReshareRecordItemController : IGListItemController <IGListItemType> {

	IGCommentReshareRecord* _record;

}

@property (nonatomic,readonly) IGCommentReshareRecord * record;              //@synthesize record=_record - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)confirmationStringFromUsernames:(id)arg1 ;
+(id)greyAttributes;
+(id)blueAttributes;
-(id)displayDelegate;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(IGCommentReshareRecord *)record;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

