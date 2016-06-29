
#import <Instagram/IGDKDiffable.h>
#import <Instagram/IGFeedItemProtocol.h>

@class NSArray, NSString;

@interface IGHScrollAYMFModel : NSObject <IGDKDiffable, IGFeedItemProtocol> {

	char _autoAdvance;
	NSArray* _items;
	NSString* _title;
	NSString* _actionText;
	NSString* _uuid;
	int _fbUpsellPosition;

}

@property (nonatomic,readonly) NSArray * items;                         //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;              //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) int fbUpsellPosition;                    //@synthesize fbUpsellPosition=_fbUpsellPosition - In the implementation block
@property (nonatomic,readonly) char autoAdvance;                        //@synthesize autoAdvance=_autoAdvance - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diffIdentifier;
-(NSString *)actionText;
-(id)initWithAYMFDict:(id)arg1 ;
-(unsigned)feedItemType;
-(int)fbUpsellPosition;
-(char)autoAdvance;
-(id)itemId;
-(NSString *)title;
-(NSArray *)items;
-(NSString *)uuid;
@end

