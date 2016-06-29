
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, IGUser, IGLocation, NSArray;

@interface IGExploreClusterItem : NSObject <NSCopying, NSCoding> {

	NSString* _pk;
	unsigned _type;
	IGUser* _user;
	IGLocation* _location;
	NSArray* _mediaBundles;
	NSString* _title;
	NSString* _subtitle;
	NSString* _byline;

}

@property (nonatomic,copy,readonly) NSString * pk;                    //@synthesize pk=_pk - In the implementation block
@property (nonatomic,readonly) unsigned type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) IGUser * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGLocation * location;                 //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSArray * mediaBundles;                //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * byline;                //@synthesize byline=_byline - In the implementation block
-(NSString *)pk;
-(NSString *)byline;
-(unsigned)parsedTypeFromDictionary:(id)arg1 ;
-(id)parsedMediaBundlesFromDictionary:(id)arg1 ;
-(id)parsedLocationFromDictionary:(id)arg1 ;
-(id)parsedUserFromDictionary:(id)arg1 ;
-(id)initWithPk:(id)arg1 type:(unsigned)arg2 location:(id)arg3 user:(id)arg4 mediaBundles:(id)arg5 title:(id)arg6 subtitle:(id)arg7 byline:(id)arg8 ;
-(NSArray *)mediaBundles;
-(IGUser *)user;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(IGLocation *)location;
@end

