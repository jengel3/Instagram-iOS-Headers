
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGStoredObject.h>

@class NSString;

@interface IGStorableObject : NSObject <NSCoding, IGStoredObject> {

	char _isStored;
	char _isUnmanaged;
	NSString* _pk;
	unsigned _version;

}

@property (nonatomic,copy) NSString * pk;                           //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char isStored;                         //@synthesize isStored=_isStored - In the implementation block
@property (nonatomic,readonly) char isUnmanaged;                    //@synthesize isUnmanaged=_isUnmanaged - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
+(id)pkFromDict:(id)arg1 ;
-(void)setPk:(NSString *)arg1 ;
-(NSString *)pk;
-(char)isUnmanaged;
-(id)initUnmanaged;
-(id)initWithPk:(id)arg1 ;
-(id)initUnmanagedWithPk:(id)arg1 ;
-(id)initUnmanagedWithDictionary:(id)arg1 ;
-(char)isStored;
-(void)setIsStored:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(char)updateWithDictionary:(id)arg1 ;
@end

