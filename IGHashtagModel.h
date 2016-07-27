
#import <Instagram/IGSearchResultsLoggableItem.h>
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGRelatedItemType.h>

@class NSString, NSNumber, NSArray;

@interface IGHashtagModel : NSObject <IGSearchResultsLoggableItem, IGDirectUploadableProducer, IGRelatedItemType> {

	NSString* _tagName;
	NSString* _tagDescription;
	NSNumber* _mediaCount;
	NSArray* _mediaBundles;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * tagName;                      //@synthesize tagName=_tagName - In the implementation block
@property (nonatomic,copy) NSString * tagDescription;               //@synthesize tagDescription=_tagDescription - In the implementation block
@property (nonatomic,retain) NSNumber * mediaCount;                 //@synthesize mediaCount=_mediaCount - In the implementation block
@property (nonatomic,retain) NSArray * mediaBundles;                //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,copy,readonly) NSString * pk; 
@property (nonatomic,readonly) NSString * displayName; 
-(NSString *)pk;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(NSNumber *)mediaCount;
-(void)setMediaCount:(NSNumber *)arg1 ;
-(NSArray *)mediaBundles;
-(id)relatedItemId;
-(id)relatedItemPath;
-(id)relatedItemType;
-(id)relatedItemDisplayName;
-(void)fetchAdditionalInfo;
-(NSString *)tagDescription;
-(void)setTagDescription:(NSString *)arg1 ;
-(void)setMediaBundles:(NSArray *)arg1 ;
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

