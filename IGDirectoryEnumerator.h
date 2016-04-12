
#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSURL, NSArray, NSDictionary;

@interface IGDirectoryEnumerator : NSEnumerator {

	SCD_Struct_IG3* _tree;
	unsigned _traversal;
	NSURL* _baseURL;
	NSArray* _properties;
	NSDictionary* _fileAttributes;
	unsigned _level;

}

@property (assign,nonatomic) unsigned traversal;                       //@synthesize traversal=_traversal - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSArray * properties;                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSDictionary * fileAttributes;              //@synthesize fileAttributes=_fileAttributes - In the implementation block
@property (assign,nonatomic) unsigned level;                           //@synthesize level=_level - In the implementation block
-(void)setTraversal:(unsigned)arg1 ;
-(unsigned)traversal;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 traversal:(unsigned)arg3 ;
-(void)setFileAttributes:(NSDictionary *)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_IG4*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setLevel:(unsigned)arg1 ;
-(unsigned)level;
-(NSURL *)baseURL;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)fileAttributes;
@end

