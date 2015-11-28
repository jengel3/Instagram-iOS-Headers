
#import <Instagram/IGStorableObject.h>
#import <Instagram/IGStoredObject.h>

@class NSArray, NSString, IGHashtagModel;

@interface IGTrendingHashtag : IGStorableObject <IGStoredObject> {

	NSArray* _mediaBundles;
	NSString* _name;
	NSString* _title;
	NSString* _subtitle;
	NSString* _byline;
	unsigned _taggedNumber;

}

@property (nonatomic,copy,readonly) NSArray * mediaBundles;              //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * byline;                   //@synthesize byline=_byline - In the implementation block
@property (nonatomic,readonly) unsigned taggedNumber;                    //@synthesize taggedNumber=_taggedNumber - In the implementation block
@property (nonatomic,readonly) IGHashtagModel * model; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
-(id)pk;
-(char)postIsBroken;
-(char)needsFetch;
-(NSArray *)mediaBundles;
-(NSString *)byline;
-(unsigned)taggedNumber;
-(NSString *)name;
-(NSString *)title;
-(IGHashtagModel *)model;
-(NSString *)subtitle;
-(char)updateWithDictionary:(id)arg1 ;
@end

