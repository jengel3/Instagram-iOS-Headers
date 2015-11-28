

#import <Instagram/Instagram-Structs.h>
@interface IGTimestampContainer : NSObject {

	unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >* _mappedTimestamps;
	set<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > >* _orderedTimestamps;

}
-(void)setTimestamp:(double)arg1 forKey:(id)arg2 ;
-(double)timestampForKey:(id)arg1 ;
-(void)insertTimestampsFromDictionary:(id)arg1 ;
-(void)removeTimestampForKey:(id)arg1 ;
-(void)removeAllTimestamps;
-(id)description;
-(id)dictionaryRepresentation;
@end

