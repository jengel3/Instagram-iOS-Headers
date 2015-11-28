
#import <Instagram/IGSearchResultsLoggableItem.h>
#import <Instagram/IGRelatedItemType.h>

@class NSString, NSNumber;

@interface IGHashtagModel : NSObject <IGSearchResultsLoggableItem, IGRelatedItemType> {

	NSString* _tagName;
	NSString* _tagDescription;
	NSNumber* _mediaCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * tagName;                      //@synthesize tagName=_tagName - In the implementation block
@property (nonatomic,copy) NSString * tagDescription;               //@synthesize tagDescription=_tagDescription - In the implementation block
@property (nonatomic,retain) NSNumber * mediaCount;                 //@synthesize mediaCount=_mediaCount - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
-(NSNumber *)mediaCount;
-(void)setMediaCount:(NSNumber *)arg1 ;
-(id)relatedItemDisplayName;
-(void)fetchAdditionalInfo;
-(NSString *)tagDescription;
-(void)setTagDescription:(NSString *)arg1 ;
-(void)setTagName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)tagName;
-(id)initWithName:(id)arg1 ;
-(NSString *)displayName;
-(id)loggingDescription;
@end

