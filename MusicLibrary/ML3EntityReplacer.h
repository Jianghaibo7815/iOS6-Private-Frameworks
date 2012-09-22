/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface ML3EntityReplacer : NSObject
{
    struct __CFDictionary *_propertyToIndexPair;
    NSMutableArray *_statements;
}

- (void).cxx_destruct;
- (void)close;
- (void)clearBindings;
- (void)bindPersistentID:(long long)arg1;
@property(readonly, nonatomic, getter=isOpen) BOOL open;
- (BOOL)perform;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindNullForProperty:(id)arg1;
- (void)statementForProperty:(id)arg1 usingBlock:(id)arg2;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 databaseConnection:(id)arg3;
- (void)dealloc;

@end
